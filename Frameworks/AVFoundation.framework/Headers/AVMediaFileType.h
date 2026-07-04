/* Runtime dump - AVMediaFileType
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMediaFileType : NSObject <NSCopying>
{
    NSString * _uti;
    long _supportsSampleReferencesOnce;
    char _supportsSampleReferences;
}

@property (readonly, nonatomic) NSString * defaultFileExtension;
@property (readonly, nonatomic) NSSet * supportedMediaTypes;
@property (readonly, nonatomic) char supportsSampleReferences;
@property (readonly, nonatomic) NSString * UTI;
@property (readonly, nonatomic) NSString * figFormatReaderFileFormat;
@property (readonly, nonatomic) unsigned long audioFileTypeID;

+ (AVMediaFileType *)allFileTypeIdentifiers;
+ (NSString *)_mediaFileTypeWithFileTypeIdentifier:(NSString *)arg0 exceptionReason:(id *)arg1;
+ (AVMediaFileType *)mediaFileTypeWithFileTypeIdentifier:(NSString *)arg0;
+ (NSArray *)isoFileTypes;
+ (void)initialize;

- (char)supportsSampleReferences;
- (NSString *)figFormatReaderFileFormat;
- (NSSet *)supportedMediaTypes;
- (char)supportsFormat:(struct opaqueCMFormatDescription *)arg0;
- (char)supportsOutputSettings:(NSDictionary *)arg0 reason:(id *)arg1;
- (unsigned long)audioFileTypeID;
- (AVMediaFileType *)initWithFileTypeIdentifier:(NSString *)arg0 exceptionReason:(id *)arg1;
- (NSString *)defaultFileExtension;
- (void)dealloc;
- (NSString *)description;
- (AVMediaFileType *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)UTI;

@end
