/* Runtime dump - IDSSocketPairMessage
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairMessage : NSObject
{
    NSData * _underlyingData;
    unsigned char _command;
    <NSObject> * _context;
    NSString * _topic;
}

@property (readonly, nonatomic) unsigned char command;
@property (readonly, retain, nonatomic) NSData * underlyingData;
@property (readonly, nonatomic) unsigned int underlyingDataLength;
@property (retain, nonatomic) <NSObject> * context;
@property (retain, nonatomic) NSString * topic;

+ (unsigned int)headerDataSize;
+ (NSObject *)messageWithCommand:(unsigned char)arg0 data:(NSData *)arg1;
+ (unsigned int)dataLengthFromHeaderData:(NSData *)arg0;
+ (NSData *)messageWithHeaderData:(NSMutableData *)arg0 data:(NSData *)arg1;
+ (NSData *)messageWithData:(NSData *)arg0;

- (unsigned char)command;
- (void)dealloc;
- (<NSObject> *)context;
- (void)setContext:(<NSObject> *)arg0;
- (NSString *)topic;
- (IDSSocketPairMessage *)initWithCommand:(unsigned char)arg0 underlyingData:(NSData *)arg1;
- (NSData *)underlyingData;
- (NSData *)_nonHeaderData;
- (unsigned int)underlyingDataLength;
- (NSData *)_existingUnderlyingData;
- (void)setTopic:(NSString *)arg0;

@end
