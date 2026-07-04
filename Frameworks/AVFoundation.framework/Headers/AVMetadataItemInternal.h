/* Runtime dump - AVMetadataItemInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataItemInternal : NSObject
{
    struct OpaqueFigMetadataReader * reader;
    long itemIndex;
    NSString * identifier;
    NSString * keySpace;
    <NSObject><NSCopying> * key;
    NSString * commonKey;
    NSLocale * locale;
    NSString * extendedLanguageTag;
    <NSObject><NSCopying> * value;
    struct ? time;
    struct ? duration;
    NSString * dataType;
    NSDictionary * extras;
}

@end
