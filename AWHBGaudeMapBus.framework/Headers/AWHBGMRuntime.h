//
//  AWHBGMRuntime.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/2/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMRuntime : NSObject

/**
 *  高德地图初始化
 *  @param apiKey 高德地图需要注册的apiKey
 */
+ (void)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions mapServicesApiKey:(NSString *)apiKey;

@end

NS_ASSUME_NONNULL_END
