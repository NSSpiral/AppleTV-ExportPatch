/* Runtime dump - DAResolvedRecipient
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAResolvedRecipient : NSObject
{
    int _status;
    int _certificatesStatus;
    int _availabilityStatus;
    NSString * _mergedFreeBusy;
    NSMutableDictionary * _mResolvedEmailToX509Certs;
}

@property (nonatomic) int status;
@property (nonatomic) int certificatesStatus;
@property (readonly, nonatomic) NSDictionary * resolvedEmailToX509Certs;
@property (nonatomic) int availabilityStatus;
@property (retain, nonatomic) NSString * mergedFreeBusy;
@property (retain, nonatomic) NSMutableDictionary * mResolvedEmailToX509Certs;

- (NSString *)description;
- (void).cxx_destruct;
- (int)status;
- (void)setStatus:(int)arg0;
- (NSMutableDictionary *)mResolvedEmailToX509Certs;
- (void)setMResolvedEmailToX509Certs:(NSMutableDictionary *)arg0;
- (void)setCertificatesStatus:(int)arg0;
- (int)certificatesStatus;
- (void)addCert:(id)arg0 forEmailAddress:(NSString *)arg1;
- (void)setAvailabilityStatus:(int)arg0;
- (int)availabilityStatus;
- (NSString *)mergedFreeBusy;
- (void)setMergedFreeBusy:(NSString *)arg0;
- (NSDictionary *)resolvedEmailToX509Certs;

@end
