/* Runtime dump - WebCoreTextTrackRepresentationIOSHelper
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreTextTrackRepresentationIOSHelper : NSObject
{
    struct TextTrackRepresentationIOS * _parent;
}

@property struct TextTrackRepresentationIOS * parent;

- (void)dealloc;
- (CALayer *)actionForLayer:(CALayer *)arg0 forKey:(NSString *)arg1;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (struct TextTrackRepresentationIOS *)parent;
- (void)setParent:(struct TextTrackRepresentationIOS *)arg0;
- (WebCoreTextTrackRepresentationIOSHelper *)initWithParent:(struct TextTrackRepresentationIOS *)arg0;

@end
