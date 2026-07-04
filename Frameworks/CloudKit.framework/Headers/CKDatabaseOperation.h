/* Runtime dump - CKDatabaseOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDatabaseOperation : CKOperation
{
    CKDatabase * _database;
}

@property (retain, nonatomic) CKDatabase * database;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (void).cxx_destruct;
- (CKDatabase *)database;
- (void)setDatabase:(CKDatabase *)arg0;

@end
