/* Runtime dump - PLCloudScenario
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudScenario : NSObject
{
    NSArray * _operations;
    NSProgress * _progress;
    unsigned int _priority;
}

@property (retain, nonatomic) NSArray * operations;
@property (retain, nonatomic) NSProgress * progress;
@property (nonatomic) unsigned int priority;

- (void)dealloc;
- (void)setProgress:(NSProgress *)arg0;
- (void)setPriority:(unsigned int)arg0;
- (NSProgress *)progress;
- (unsigned int)priority;
- (void)setOperations:(NSArray *)arg0;
- (NSArray *)operations;
- (void)requestCancel;

@end
