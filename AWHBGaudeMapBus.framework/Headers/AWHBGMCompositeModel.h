//
//  AWHBGMCompositeModel.h
//  AWHBGaudeMapBus
//
//  Created by 王恒 on 2024/9/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMCompositeModel : NSObject

///纬度
@property (nonatomic, assign) CGFloat latitude;

///经度
@property (nonatomic, assign) CGFloat longitude;

///地址名称
@property (nonatomic, strong) NSString *name;

@end

NS_ASSUME_NONNULL_END
