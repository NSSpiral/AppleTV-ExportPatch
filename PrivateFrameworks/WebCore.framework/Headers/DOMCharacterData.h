/* Runtime dump - DOMCharacterData
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMCharacterData : DOMNode

@property (copy) NSString * data;
@property (readonly) unsigned int length;

- (unsigned int)length;
- (NSString *)data;
- (void)setData:(NSString *)arg0;
- (void)appendData:(NSData *)arg0;
- (void)remove;
- (NSData *)substringData:(unsigned int)arg0 length:(unsigned int)arg1;
- (NSData *)substringData:(unsigned int)arg0 :(unsigned int)arg1;
- (void)insertData:(unsigned int)arg0 data:(NSString *)arg1;
- (void)insertData:(unsigned int)arg0 :(id)arg1;
- (void)deleteData:(unsigned int)arg0 length:(unsigned int)arg1;
- (void)deleteData:(unsigned int)arg0 :(unsigned int)arg1;
- (void)replaceData:(unsigned int)arg0 length:(unsigned int)arg1 data:(NSString *)arg2;
- (void)replaceData:(unsigned int)arg0 :(unsigned int)arg1 :(id)arg2;

@end
