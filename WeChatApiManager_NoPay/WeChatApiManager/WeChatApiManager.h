//
//  WeChatApiManager.h
//  WeChatApiManager_NoPay
//
//  Created by YanYi on 2019/1/7.
//  Copyright © 2019 YanYi. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "WXApi.h"
#import "WXApiObject.h"
#import "WechatAuthSDK.h"
NS_ASSUME_NONNULL_BEGIN


@protocol WXApiManagerDelegate <NSObject>

@optional

- (void)managerDidRecvGetMessageReq:(GetMessageFromWXReq *)request;

- (void)managerDidRecvShowMessageReq:(ShowMessageFromWXReq *)request;

- (void)managerDidRecvLaunchFromWXReq:(LaunchFromWXReq *)request;

- (void)managerDidRecvMessageResponse:(SendMessageToWXResp *)response;

- (void)managerDidRecvAuthResponse:(SendAuthResp *)response;

- (void)managerDidRecvAddCardResponse:(AddCardToWXCardPackageResp *)response;

//- (void)managerDidRecvPayInfoResponse:(PayResp *)response;

@end


@interface WeChatApiManager : NSObject

@property (nonatomic, weak) id<WXApiManagerDelegate> delegate;

+ (instancetype)sharedManager;

@end
NS_ASSUME_NONNULL_END
