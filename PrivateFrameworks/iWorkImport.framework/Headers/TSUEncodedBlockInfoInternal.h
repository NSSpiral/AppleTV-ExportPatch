/* Runtime dump - TSUEncodedBlockInfoInternal
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUEncodedBlockInfoInternal : NSObject <TSUEncodedBlockInfo>
{
    unsigned long _encodedLength;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) unsigned long encodedLength;
@property (readonly, nonatomic) unsigned long decodedLength;

- (unsigned long)decodedLength;
- (TSUEncodedBlockInfoInternal *)initWithEncodedLength:(unsigned long)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (unsigned long)encodedLength;

@end
