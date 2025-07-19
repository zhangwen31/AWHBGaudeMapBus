//
//  AWHBGMCompositeNavigation.h
//  AWHBGaudeMapBus
//
//  Created by 王恒 on 2024/9/7.
//

#import <Foundation/Foundation.h>
#import <AWHBGaudeMapBus/AWHBGMCompositeModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMCompositeNavigation : NSObject

/**
 * @brief 传入终点 高德地图导航 起始地址默认用户当前位置
 * @param lat 纬度
 * @param lon 经度
 * @param name 地理位置名称
 */
+ (void)routePlanEndLocationWithLatitude:(CGFloat)lat longitude:(CGFloat)lon name:(NSString *)name;

/**
 * @brief 传入终点 高德地图导航 起始地址默认用户当前位置
 * @param lat 纬度
 * @param lon 经度
 * @param name 地理位置名称
 * @param directly 是否直接进入导航界面
 */
+ (void)routePlanEndLocationWithLatitude:(CGFloat)lat longitude:(CGFloat)lon name:(NSString *)name directly:(BOOL)directly;


/**
 * @brief 高德地图导航
 * @param list 地点坐标数组  一个默认终点
 * @param directly 是否直接进入导航界面
 */
+ (void)routePlanLocationList:(NSArray<AWHBGMCompositeModel *> *)list directly:(BOOL)directly;

@end

NS_ASSUME_NONNULL_END
