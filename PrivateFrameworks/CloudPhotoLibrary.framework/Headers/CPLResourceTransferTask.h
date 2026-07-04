/* Runtime dump - CPLResourceTransferTask
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLResourceTransferTask : NSObject <NSSecureCoding>
{
    int _priority;
    char _cancelled;
    CPLResource * _resource;
    NSString * _taskIdentifier;
}

@property (retain, nonatomic) CPLResource * resource;
@property (copy, nonatomic) NSString * taskIdentifier;
@property (nonatomic) char highPriority;
@property (readonly, nonatomic) char cancelled;

+ (char)supportsSecureCoding;

- (void)setAssetUuid:(NSString *)arg0;
- (NSString *)assetUuid;
- (Class)classForKeyedArchiver;
- (void)launch;
- (CPLResourceTransferTask *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CPLResourceTransferTask *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (Class)classForCoder;
- (char)isCancelled;
- (void).cxx_destruct;
- (void)setTaskIdentifier:(NSString *)arg0;
- (void)setHighPriority:(char)arg0;
- (CPLResource *)resource;
- (char)isHighPriority;
- (NSString *)taskIdentifier;
- (void)cancelTask;
- (void)setResource:(CPLResource *)arg0;

@end
