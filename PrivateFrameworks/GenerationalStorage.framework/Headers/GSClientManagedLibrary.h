/* Runtime dump - GSClientManagedLibrary
 * Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol>
{
    GSTemporaryStorage * _ts;
}

@property (readonly, nonatomic) NSObject<GSAdditionStoring> * storage;
@property (readonly, nonatomic) NSString * nameSpace;

- (void)dealloc;
- (NSString *)nameSpace;
- (struct NSObject *)storage;
- (char)generationsRemove:(id)arg0 error:(id *)arg1;
- (GSClientManagedLibrary *)initWithURL:(NSString *)arg0 error:(id *)arg1;

@end
