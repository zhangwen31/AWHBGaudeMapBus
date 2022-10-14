//
//  AWHBGMCoordinateQuadTree.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>
#import <MAMapKit/MAMapKit.h>
#import <AWHBPublicBusiness/QuadTree.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMCoordinateQuadTree : UIView

@property (nonatomic, assign) QuadTreeNode * root;

/// 这里对poi对象的内存管理被四叉树接管了，当clean的时候会释放，外部有引用poi的地方必须再clean前清理。
- (void)buildTreeWithPOIs:(NSArray *)pois;
- (void)clean;

- (NSArray *)clusteredAnnotationsWithinMapRect:(MAMapRect)rect withZoomScale:(double)zoomScale andZoomLevel:(double)zoomLevel;

@end

NS_ASSUME_NONNULL_END
