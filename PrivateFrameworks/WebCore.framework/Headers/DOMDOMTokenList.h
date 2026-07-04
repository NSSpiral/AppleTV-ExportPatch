/* Runtime dump - DOMDOMTokenList
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMDOMTokenList : DOMObject

@property (readonly) unsigned int length;

- (void)dealloc;
- (unsigned int)length;
- (NSObject *)item:(unsigned int)arg0;
- (void)finalize;
- (char)contains:(id)arg0;
- (void)add:(int)arg0;
- (void)remove:(NSIndexSet *)arg0;
- (char)toggle:(char)arg0 force:(char)arg1;

@end
