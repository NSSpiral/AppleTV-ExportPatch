/* Runtime dump - VKGlobePointCache
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGlobePointCache : NSObject
{
    VKClassicGlobeCanvas * _canvas;
}

@property (nonatomic) VKClassicGlobeCanvas * canvas;

- (void)setCanvas:(VKClassicGlobeCanvas *)arg0;
- (VKClassicGlobeCanvas *)canvas;
- (id)addHandleAtCoordinate:(struct ?)arg0 withHighPrecision:(char)arg1;
- (void)removeHandle:(_NSStdIOFileHandle *)arg0;
- (struct VKPoint)pointForHandle:(id)arg0 atCoordinate:(struct ?)arg1 withHighPrecision:(char)arg2;

@end
