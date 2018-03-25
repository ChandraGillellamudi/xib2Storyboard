//
//  NFDraggableView.h
//  xib2Storyboard
//
//  Created by Dries Van Schevensteen on 07/01/2018.
//  (c) 2018 November Five BVBA
//
//  For the full copyright and license information, please view the LICENSE
//  file that was distributed with this source code.
//

@class NFDraggableView;



#pragma mark - NFDraggableViewDelegate protocol -

@protocol NFDraggableViewDelegate <NSObject>

@optional

- (void)draggableView:(nonnull NFDraggableView *)draggableView didReceiveFiles:(nullable NSArray<NSURL *> *)fileURLs;

@end



#pragma mark - NFDraggableView interface -

@interface NFDraggableView : NSView

@property (nonatomic, weak, nullable) id<NFDraggableViewDelegate> delegate;

@end
