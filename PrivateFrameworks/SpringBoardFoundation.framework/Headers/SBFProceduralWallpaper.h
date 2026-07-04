/* Runtime dump - SBFProceduralWallpaper
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFProceduralWallpaper : UIView <SBFProceduralWallpaper>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) <SBFProceduralWallpaperDelegate> * delegate;

+ (NSString *)identifier;

- (BRControl *)view;
- (void)setAnimating:(char)arg0;

@end
