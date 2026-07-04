/* Runtime dump - CPLPlatformObject
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPlatformObject : NSObject
{
    <CPLAbstractObject> * _abstractObject;
}

@property (readonly, weak, nonatomic) <CPLAbstractObject> * abstractObject;

- (CPLPlatformObject *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (CPLPlatformObject *)initWithAbstractObject:(<CPLAbstractObject> *)arg0;
- (<CPLAbstractObject> *)abstractObject;

@end
