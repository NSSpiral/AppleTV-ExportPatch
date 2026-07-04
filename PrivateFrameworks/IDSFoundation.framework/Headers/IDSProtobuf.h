/* Runtime dump - IDSProtobuf
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSProtobuf : NSObject <NSCoding>
{
    NSMutableDictionary * _protoBufParams;
    NSData * _uncompressedData;
}

@property (retain, nonatomic) NSData * data;
@property (retain, nonatomic) NSData * uncompressedData;
@property (nonatomic) unsigned short type;
@property (nonatomic) char isResponse;
@property (retain, nonatomic) IDSMessageContext * context;

+ (NSObject *)keyRepresentationForType:(unsigned short)arg0 isResponse:(char)arg1;

- (void)dealloc;
- (IDSProtobuf *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (IDSProtobuf *)init;
- (NSString *)description;
- (IDSProtobuf *)initWithDictionary:(NSDictionary *)arg0;
- (void)setType:(unsigned short)arg0;
- (unsigned short)type;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (IDSMessageContext *)context;
- (void)setContext:(IDSMessageContext *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setIsResponse:(char)arg0;
- (char)isResponse;
- (IDSProtobuf *)initWithProtobufData:(NSDictionary *)arg0 type:(unsigned short)arg1 isResponse:(char)arg2;
- (NSData *)dictionaryRepresentationWithUncompressedData;
- (NSData *)uncompressedData;
- (void)setUncompressedData:(NSData *)arg0;

@end
