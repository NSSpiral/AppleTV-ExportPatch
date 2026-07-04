/* Runtime dump - TSPMutableCryptoInfoInternal
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPMutableCryptoInfoInternal : TSPCryptoInfoInternal <TSPMutableCryptoInfo>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) SFUCryptoKey * cryptoKey;
@property (readonly, nonatomic) unsigned long preferredBlockSize;
@property (readonly, nonatomic) NSArray * blockInfos;
@property (readonly, nonatomic) unsigned long decodedLength;

- (TSPMutableCryptoInfoInternal *)initWithCryptoKey:(SFUCryptoKey *)arg0 preferredBlockSize:(unsigned long)arg1 blockInfos:(NSArray *)arg2 decodedLength:(unsigned long)arg3;
- (void)addBlockInfo:(NSDictionary *)arg0;
- (void)incrementDecodedLengthBy:(unsigned long)arg0;
- (void)reset;

@end
