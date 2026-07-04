/* Runtime dump - PLTransientOrderKey
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLTransientOrderKey : NSObject
{
    NSManagedObjectID * _objectID;
    NSManagedObjectContext * _moc;
    long long _orderValue;
}

@property (nonatomic) long long orderValue;
@property (retain, nonatomic) NSManagedObjectID * objectID;
@property (retain, nonatomic) NSManagedObjectContext * moc;

- (void)dealloc;
- (NSString *)description;
- (NSManagedObjectID *)objectID;
- (void)setOrderValue:(long long)arg0;
- (void)setObjectID:(NSManagedObjectID *)arg0;
- (long long)orderValue;
- (NSString *)secondaryOrderSortKey;
- (NSObject *)childManagedObject;
- (NSManagedObjectContext *)moc;
- (void)setMoc:(NSManagedObjectContext *)arg0;

@end
