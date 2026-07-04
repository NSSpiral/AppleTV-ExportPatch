/* Runtime dump - CMNatalieData
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMNatalieData : CMLogItem
{
    int fRecordId;
    double fStartDate;
    int fSession;
    double fMets;
    double fNatalies;
    double fBasalNatalies;
    NSUUID * fSourceId;
}

@property (readonly, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) NSNumber * mets;
@property (readonly, nonatomic) NSNumber * natalies;
@property (readonly, nonatomic) NSNumber * basalNatalies;
@property (readonly, nonatomic) int session;
@property (readonly, nonatomic) int recordId;
@property (readonly, nonatomic) NSUUID * sourceId;

+ (NSString *)sessionName:(int)arg0;
+ (NSArray *)maxNatalieEntries;
+ (char)supportsSecureCoding;

- (CMNatalieData *)initWithStartDate:(double)arg0 recordId:(int)arg1 session:(int)arg2 mets:(double)arg3 natalies:(double)arg4 basalNatalies:(double)arg5 timestamp:(double)arg6 sourceId:(NSUUID *)arg7;
- (NSNumber *)mets;
- (NSNumber *)natalies;
- (NSNumber *)basalNatalies;
- (void)dealloc;
- (CMNatalieData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CMNatalieData *)copyWithZone:(struct _NSZone *)arg0;
- (int)session;
- (int)recordId;
- (NSUUID *)sourceId;
- (NSDate *)startDate;

@end
