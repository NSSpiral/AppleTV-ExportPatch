/* Runtime dump - FBWindowContextHostSnapshotView
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWindowContextHostSnapshotView : UIView <FBWindowContextHostSnapshotView>
{
    id _surface;
}

@property (readonly, nonatomic) id IOSurface;

- (FBWindowContextHostSnapshotView *)initWithFrame:(struct CGRect)arg0;
- (NSObject *)_initWithFrame:(struct CGRect)arg0 CGImage:(struct CGSize)arg1 transform:(NSObject *)arg2 surface:(struct CGImage *)arg3;
- (NSObject *)IOSurface;

@end
