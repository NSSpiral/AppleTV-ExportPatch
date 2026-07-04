/* Runtime dump - PFUbiquityBaselineOperation
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation
{
    NSString * _modelVersionHash;
    NSManagedObjectModel * _model;
}

@property (readonly, nonatomic) NSString * modelVersionHash;
@property (readonly, nonatomic) NSManagedObjectModel * model;

- (NSString *)modelVersionHash;
- (PFUbiquityBaselineOperation *)initWithPersistentStore:(char)arg0 localPeerID:(NSString *)arg1 andUbiquityRootLocation:(NSObject *)arg2;
- (void)dealloc;
- (NSString *)description;
- (NSManagedObjectModel *)model;

@end
