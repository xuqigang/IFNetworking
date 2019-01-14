//
//  IFNetworkingInterface.m
//  IfengSmallVideo
//
//  Created by Hanxiaojie on 2017/11/9.
//  Copyright © 2017年 凤凰新媒体. All rights reserved.
//

#import "IFNetworkingInterfaceHandle.h"
#import "IFNetworkingManager.h"
#import "IFNetworkingInterfaceDefine.h"
#import "IFAutoPurgingDataCache.h"

static NSString * const ISVErrorDomain = @"com.ifeng.errorDomain";

@implementation IFNetworkingInterfaceHandle
#pragma mark--------baseURL拼接-----
+ (NSString *) urlStringRelativeToDefault:(NSString*) urlPath {
    return [self hostString:IFDefaultBaseURL relativeToUrlString:urlPath];
}

+ (NSString *) hostString:(NSString * ) hostString relativeToUrlString:(NSString*) urlPath {
    return [hostString stringByAppendingString:urlPath];
}

#pragma mark------首页推荐接口------
+ (void) requestHomeRecommendWithParameters:(NSDictionary*) parameters success:(nullable void (^)(id _Nullable responseObject))success failure:(nullable void (^)(NSError *error))failure {
    
    //确定接口所要连接的服务器地址
    NSString *url = [self hostString:IFRecommendBaseURL relativeToUrlString:@""];
    
    IFNetworkingManager *manager = [IFNetworkingManager manager];
    
    [manager GET:url parameters:parameters success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        if (success) {
            success(responseObject);
        }
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        if (failure) {
            failure(error);
        }
    }];
}

@end
