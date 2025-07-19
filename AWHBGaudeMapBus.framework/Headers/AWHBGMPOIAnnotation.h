//
//  AWHBGMPOIAnnotation.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/26.
//

#import <Foundation/Foundation.h>
#import <AMapSearchKit/AMapCommonObj.h>
#import <MAMapKit/MAMapKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMPOIAnnotation : NSObject<MAAnnotation>

- (id)initWithPOI:(AMapPOI *)poi;

@property (nonatomic, readonly, strong) AMapPOI *poi;

@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

/*!
 @brief 获取annotation标题
 @return 返回annotation的标题信息
 */
- (NSString *)title;

/*!
 @brief 获取annotation副标题
 @return 返回annotation的副标题信息
 */
- (NSString *)subtitle;

@end

NS_ASSUME_NONNULL_END
