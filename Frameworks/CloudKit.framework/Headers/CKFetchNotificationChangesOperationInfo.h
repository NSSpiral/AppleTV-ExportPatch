/* Runtime dump - CKFetchNotificationChangesOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchNotificationChangesOperationInfo : CKOperationInfo <NSSecureCoding>
{
    CKServerChangeToken * _previousServerChangeToken;
    unsigned int _resultsLimit;
}

@property (retain, nonatomic) CKServerChangeToken * previousServerChangeToken;
@property (nonatomic) unsigned int resultsLimit;

+ (char)supportsSecureCoding;

- (CKFetchNotificationChangesOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setResultsLimit:(unsigned int)arg0;
- (unsigned int)resultsLimit;
- (CKServerChangeToken *)previousServerChangeToken;
- (void)setPreviousServerChangeToken:(CKServerChangeToken *)arg0;

@end
