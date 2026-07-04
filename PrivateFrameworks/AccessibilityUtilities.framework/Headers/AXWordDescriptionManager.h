/* Runtime dump - AXWordDescriptionManager
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXWordDescriptionManager : NSObject
{
    NSManagedObjectContext * _managedObjectContext;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSManagedObjectModel * _managedObjectModel;
    NSString * languageDialectCode;
}

@property (retain, nonatomic) NSString * languageDialectCode;
@property (readonly, nonatomic) NSManagedObjectContext * managedObjectContext;
@property (readonly, nonatomic) NSPersistentStoreCoordinator * persistentStoreCoordinator;
@property (readonly, nonatomic) NSManagedObjectModel * managedObjectModel;

+ (AXWordDescriptionManager *)sharedInstance;

- (void)dealloc;
- (NSString *)languageCode;
- (NSManagedObjectModel *)managedObjectModel;
- (NSManagedObjectContext *)managedObjectContext;
- (void)setLanguageDialectCode:(NSString *)arg0;
- (id)descriptionForWord:(id)arg0;
- (NSString *)languageDialectCode;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;

@end
