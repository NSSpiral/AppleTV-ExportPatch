/* Runtime dump - CAMCaptureRequest
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMCaptureRequest : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary * __parameterStorage;
    int _type;
}

@property (readonly, nonatomic) int type;
@property (readonly, copy, nonatomic) NSDictionary * _customParameterStorage;
@property (readonly, nonatomic) NSMutableDictionary * _parameterStorage;

- (CAMCaptureRequest *)init;
- (int)type;
- (CAMCaptureRequest *)copyWithZone:(struct _NSZone *)arg0;
- (CAMCaptureRequest *)initWithType:(int)arg0;
- (CAMCaptureRequest *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSMutableDictionary *)_parameterStorage;
- (NSString *)parameterForKey:(NSString *)arg0;
- (NSDictionary *)_customParameterStorage;

@end
