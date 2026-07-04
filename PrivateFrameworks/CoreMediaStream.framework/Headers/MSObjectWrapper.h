/* Runtime dump - MSObjectWrapper
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSObjectWrapper : NSObject
{
    long long _size;
    long long _uniqueID;
    <NSObject><NSCoding> * _object;
    int _errorCount;
}

@property (nonatomic) long long size;
@property (nonatomic) long long uniqueID;
@property (readonly, nonatomic) <NSCoding> * object;
@property (nonatomic) int errorCount;

+ (NSObject *)wrapperWithObject:(<NSCoding> *)arg0 size:(long long)arg1;
+ (MSObjectWrapper *)objectsFromWrappers:(id)arg0;
+ (int)indexOfObject:(struct objc_method *)arg0 inWrapperArray:(NSArray *)arg1;
+ (MSObjectWrapper *)objectsFromWrappers:(id)arg0 equalToObject:(NSObject *)arg1;

- (void)setUniqueID:(long long)arg0;
- (long long)size;
- (void)setSize:(long long)arg0;
- (<NSCoding> *)object;
- (void).cxx_destruct;
- (int)errorCount;
- (void)setErrorCount:(int)arg0;
- (MSObjectWrapper *)initWithObject:(<NSCoding> *)arg0 size:(long long)arg1;
- (long long)uniqueID;

@end
