/* Runtime dump - PLRotatedImage
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRotatedImage : UIImage
{
    char _wasRotated;
}

@property (nonatomic) char wasRotated;

- (char)wasRotated;
- (void)setWasRotated:(char)arg0;

@end
