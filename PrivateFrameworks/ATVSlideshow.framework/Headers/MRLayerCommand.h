/* Runtime dump - MRLayerCommand
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRLayerCommand : NSObject
{
    int commandID;
    id object;
}

- (void)dealloc;
- (MRLayerCommand *)initWithCommand:(int)arg0 andObject:(NSObject *)arg1;

@end
