/* Runtime dump - CKDApplicationMetadata
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDApplicationMetadata : NSObject
{
    NSString * _apsEnvironmentString;
    int _isApplication;
}

@property (retain, nonatomic) NSString * apsEnvironmentString;
@property (nonatomic) int isApplication;

- (CKDApplicationMetadata *)init;
- (void).cxx_destruct;
- (NSString *)apsEnvironmentString;
- (void)setApsEnvironmentString:(NSString *)arg0;
- (int)isApplication;
- (void)setIsApplication:(int)arg0;

@end
