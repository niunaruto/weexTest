//
//  WXAppConfiguration.h
//  weexTest
//
//  Created by Macbook1 on 2019/2/20.
//  Copyright © 2019 Macbook1. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WXAppConfiguration : NSObject
@property (nonatomic, strong) NSString * appGroup;
@property (nonatomic, strong) NSString * appName;
@property (nonatomic, strong) NSString * appVersion;
@property (nonatomic, strong) NSString * externalUA;
@property (nonatomic, strong) NSString * JSFrameworkVersion;
@property (nonatomic, strong) NSArray  * customizeProtocolClasses;

/**
 * AppGroup的名字或者公司组织名，默认值为nil
 */
+ (NSString *)appGroup;
+ (void)setAppGroup:(NSString *) appGroup;

/**
 * app的名字, 默认值是main bundle里面的CFBundleDisplayName
 */
+ (NSString *)appName;
+ (void)setAppName:(NSString *)appName;

/**
 * app版本信息, 默认值是main bundle里面的CFBundleShortVersionString
 */
+ (NSString *)appVersion;
+ (void)setAppVersion:(NSString *)appVersion;

/**
 * app外面用户代理的名字, 所有Weex的请求头都会设置用户代理user agent字段，默认值为nil
 */
+ (NSString *)externalUserAgent;
+ (void)setExternalUserAgent:(NSString *)userAgent;

/**
 * JSFrameworkVersion的版本
 */
+ (NSString *)JSFrameworkVersion;
+ (void)setJSFrameworkVersion:(NSString *)JSFrameworkVersion;


/*
 *  自定义customizeProtocolClasses
 */
+ (NSArray*)customizeProtocolClasses;
+ (void)setCustomizeProtocolClasses:(NSArray*)customizeProtocolClasses;

@end

NS_ASSUME_NONNULL_END
