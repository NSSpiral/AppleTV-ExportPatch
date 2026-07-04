/* Runtime dump - TSPTemporaryFileCoordinatorDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPTemporaryFileCoordinatorDelegate : NSObject <TSPFileCoordinatorDelegate>
{
    NSURL * _URL;
}

@property (copy, nonatomic) NSURL * URL;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)performReadUsingAccessor:(NSObject *)arg0;
- (TSPTemporaryFileCoordinatorDelegate *)init;
- (TSPTemporaryFileCoordinatorDelegate *)initWithURL:(NSString *)arg0;
- (NSURL *)URL;
- (void)setURL:(NSString *)arg0;
- (void).cxx_destruct;

@end
