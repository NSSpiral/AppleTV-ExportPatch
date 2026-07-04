/* Runtime dump - CKReference
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKReference : NSObject <CKRecordValue, NSSecureCoding, NSCopying>
{
    unsigned int _referenceAction;
    CKRecordID * _recordID;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) unsigned int referenceAction;
@property (copy, nonatomic) CKRecordID * recordID;

+ (char)supportsSecureCoding;

- (CKReference *)initWithRecord:(void *)arg0 action:(unsigned int)arg1;
- (CKReference *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKReference *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)debugDescription;
- (CKReference *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (CKRecordID *)recordID;
- (void)setRecordID:(CKRecordID *)arg0;
- (CKReference *)initWithRecordID:(CKRecordID *)arg0 action:(unsigned int)arg1;
- (NSString *)CKPropertiesDescription;
- (NSString *)ckShortDescription;
- (unsigned int)referenceAction;
- (CKReference *)_initBare;

@end
