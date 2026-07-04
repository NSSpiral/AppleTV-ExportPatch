/* Runtime dump - ATVHSDAAPAssetData
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSDAAPAssetData : NSObject
{
    NSData * _assetData;
    NSString * _assetString;
}

@property (retain, nonatomic) NSData * assetData;
@property (retain, nonatomic) NSString * assetString;

- (void)dealloc;
- (ATVHSDAAPAssetData *)initWithData:(NSData *)arg0;
- (ATVHSDAAPAssetData *)initWithString:(NSString *)arg0;
- (id)valueForCode:(unsigned long)arg0;
- (NSString *)valueForATVMediaKey:(NSString *)arg0 withHSDataClient:(NSObject *)arg1;
- (id)valueForCode:(unsigned long)arg0 data:(char *)arg1 length:(unsigned long)arg2;
- (unsigned long)codeForMediaKey:(NSString *)arg0;
- (void)setAssetData:(NSData *)arg0;
- (void)setAssetString:(NSString *)arg0;
- (NSString *)assetString;
- (NSData *)assetData;
- (NSObject *)assetPlaybackURLWithHSClient:(NSObject *)arg0;
- (NSObject *)decryptedDRMTokenDataWithHSClient:(NSObject *)arg0;
- (NSObject *)_iTunesMatchID;
- (id)mediaTypeForMediaKind:(unsigned long)arg0;
- (NSData *)mediaKindListingFromData:(char *)arg0 length:(unsigned long)arg1;

@end
