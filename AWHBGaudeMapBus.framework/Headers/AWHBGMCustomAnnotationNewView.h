//
//  AWHBGMCustomAnnotationNewView.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/6/4.
//

#import <MAMapKit/MAMapKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
#import <AWHBPublicBusiness/AWHBPBCarAggregatedListView.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHBGMReturnBtnCarBlock)(AWHBBCarModel *model);
@interface AWHBGMCustomAnnotationNewView : MAPinAnnotationView

@property (nonatomic, assign) NSUInteger count;
@property (nonatomic, strong) NSString *carIds;
@property (nonatomic, strong) AWHBBCarModel *model;
@property (nonatomic, readwrite,strong) UILabel *countLab;
@property (nonatomic, strong) UILabel *countLabel;
@property (nonatomic, strong) UILabel *speedLab;
@property (nonatomic, strong, readonly) AWHBPBCarAggregatedListView *aggregatedListView;
@property(nonatomic, copy) AWHBGMReturnBtnCarBlock returnBtnCarBlock;
- (void)setModel:(AWHBBCarModel *)model;
-(void)setupLabel;
- (void)setCarPlateAndSpeedAlpha:(CGFloat)alpha;

- (void)setupCarModelArray:(NSArray<AWHBBCarModel *> *)carModelArray;

@end

NS_ASSUME_NONNULL_END
