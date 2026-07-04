/* Runtime dump - TSPDecoderDataInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDecoderDataInfo : NSObject <TSPDecoderDataInfo>
{
    TSPDigest * _digest;
    NSString * _preferredFilename;
    NSString * _externalFilePath;
    long long _identifier;
}

@property (readonly, nonatomic) long long identifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) TSPDigest * digest;
@property (readonly, nonatomic) NSString * preferredFilename;
@property (readonly, nonatomic) NSString * externalFilePath;

- (TSPDecoderDataInfo *)initWithIdentifier:(long long)arg0 digest:(TSPDigest *)arg1 preferredFilename:(NSString *)arg2 externalFilePath:(NSString *)arg3;
- (NSString *)externalFilePath;
- (TSPDigest *)digest;
- (NSString *)preferredFilename;
- (TSPDecoderDataInfo *)init;
- (long long)identifier;
- (void).cxx_destruct;
- (TSPDecoderDataInfo *)initWithMessage:(struct DataInfo *)arg0;

@end
