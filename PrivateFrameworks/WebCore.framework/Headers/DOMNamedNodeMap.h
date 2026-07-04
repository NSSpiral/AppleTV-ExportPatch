/* Runtime dump - DOMNamedNodeMap
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMNamedNodeMap : DOMObject

@property (readonly) unsigned int length;

- (void)dealloc;
- (unsigned int)length;
- (NSObject *)item:(unsigned int)arg0;
- (void)finalize;
- (NSObject *)getNamedItem:(NSObject *)arg0;
- (NSObject *)setNamedItem:(NSObject *)arg0;
- (NSObject *)removeNamedItem:(NSObject *)arg0;
- (id)getNamedItemNS:(id)arg0 localName:(NSString *)arg1;
- (id)getNamedItemNS:(id)arg0 :(id)arg1;
- (id)setNamedItemNS:(id)arg0;
- (id)removeNamedItemNS:(id)arg0 localName:(NSString *)arg1;
- (id)removeNamedItemNS:(id)arg0 :(id)arg1;

@end
