/* Runtime dump - DOMMediaList
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMMediaList : DOMObject

@property (copy) NSString * mediaText;
@property (readonly) unsigned int length;

- (void)dealloc;
- (unsigned int)length;
- (NSObject *)item:(unsigned int)arg0;
- (void)finalize;
- (NSString *)mediaText;
- (void)setMediaText:(NSString *)arg0;
- (void)deleteMedium:(id)arg0;
- (void)appendMedium:(id)arg0;

@end
