/* Runtime dump - TSPCryptoInfoInternal
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPCryptoInfoInternal : NSObject <TSPCryptoInfo>
{
    SFUCryptoKey * _cryptoKey;
    unsigned long _preferredBlockSize;
    NSArray * _blockInfos;
    unsigned long _decodedLength;
}

@property (retain, nonatomic) NSArray * blockInfos;
@property (nonatomic) unsigned long decodedLength;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) SFUCryptoKey * cryptoKey;
@property (readonly, nonatomic) unsigned long preferredBlockSize;

- (SFUCryptoKey *)cryptoKey;
- (unsigned long)decodedLength;
- (id)mutableCryptoInfoCopy;
- (NSArray *)blockInfos;
- (unsigned long)preferredBlockSize;
- (TSPCryptoInfoInternal *)initWithCryptoKey:(SFUCryptoKey *)arg0 preferredBlockSize:(unsigned long)arg1 blockInfos:(NSArray *)arg2 decodedLength:(unsigned long)arg3;
- (TSPCryptoInfoInternal *)initWithCryptoInfo:(NSDictionary *)arg0;
- (void)setBlockInfos:(NSArray *)arg0;
- (void)setDecodedLength:(unsigned long)arg0;
- (void).cxx_destruct;

@end
