//
//  IFNetworkingInterfaceDefine.h
//  IfengSmallVideo
//
//  Created by Hanxiaojie on 2017/11/9.
//  Copyright © 2017年 凤凰新媒体. All rights reserved.
//

#ifndef IFNetworkingInterfaceDefine_h
#define IFNetworkingInterfaceDefine_h

#define ISVEnvironmentType 1 //1代表正式环境，0代表测试环境

#if ISVEnvironmentType

#define IFDefaultBaseURL @""
#define IFACBaseURL @"http://ac.51fa.shop/videoapi"
#define IFRecommendBaseURL @"http://recommend.51fa.shop/videoapi"
#define IFLocalBaseURL @"http://local.51fa.shop/videoapi"
#define IFUserBaseURL @"http://user.51fa.shop/videoapi"
#define IFMessageBaseURL @"http://msg.51fa.shop/videoapi"
#define IFSearchBaseURL @"http://search.51fa.shop/videoapi"
#define IFVideoBaseURL @"http://v.51fa.shop/videoapi"
//分享、协议的地址
#define IFHTMLBaseURL @"https://share.51fa.shop/web"
#define IFHUserProtocolURL @"http://service.51fa.shop/web/protocol.html"


#else

#define IFDefaultBaseURL @""
#define IFACBaseURL IFDefaultBaseURL
#define IFRecommendBaseURL IFDefaultBaseURL
#define IFLocalBaseURL IFDefaultBaseURL
#define IFUserBaseURL IFDefaultBaseURL
#define IFMessageBaseURL IFDefaultBaseURL
#define IFSearchBaseURL IFDefaultBaseURL
#define IFVideoBaseURL IFDefaultBaseURL
//分享、协议的地址
#define IFHTMLBaseURL @"http://service.51fa.shop/web"
#define IFHUserProtocolURL @"http://service.51fa.shop/web/protocol.html"

#endif



#endif /* IFNetworkingInterfaceDefine_h */
