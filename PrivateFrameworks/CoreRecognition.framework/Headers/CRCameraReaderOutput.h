/* Runtime dump - CRCameraReaderOutput
 * Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRCameraReaderOutput : NSObject
{
    CRCameraReaderOutputInternal * _objectInternal;
}

@property (readonly) NSString * type;
@property (readonly) NSString * stringValue;
@property (retain) CRCameraReaderOutputInternal * objectInternal;

- (void)dealloc;
- (CRCameraReaderOutput *)init;
- (NSString *)type;
- (NSString *)stringValue;
- (void).cxx_destruct;
- (void)setObjectInternal:(CRCameraReaderOutputInternal *)arg0;
- (CRCameraReaderOutputInternal *)objectInternal;

@end
