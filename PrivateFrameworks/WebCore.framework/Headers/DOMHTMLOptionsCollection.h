/* Runtime dump - DOMHTMLOptionsCollection
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLOptionsCollection : DOMObject

@property int selectedIndex;
@property unsigned int length;

- (void)dealloc;
- (unsigned int)length;
- (int)selectedIndex;
- (void)setSelectedIndex:(int)arg0;
- (void)setLength:(unsigned int)arg0;
- (NSObject *)item:(unsigned int)arg0;
- (void)finalize;
- (NSObject *)namedItem:(NSObject *)arg0;
- (void)remove:(unsigned int)arg0;
- (void)add:(int)arg0 index:(unsigned int)arg1;

@end
