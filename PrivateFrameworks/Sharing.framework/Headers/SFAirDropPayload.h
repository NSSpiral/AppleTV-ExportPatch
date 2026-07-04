/* Runtime dump - SFAirDropPayload
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropPayload : NSObject
{
    char _wasString;
    NSURL * _URL;
    NSData * _data;
    NSString * _type;
    UIImage * _previewImage;
    NSString * _payloadDescription;
    int _identifer;
}

@property (nonatomic) char wasString;
@property (copy, nonatomic) NSURL * URL;
@property (retain, nonatomic) NSData * data;
@property (copy, nonatomic) NSString * type;
@property (retain, nonatomic) UIImage * previewImage;
@property (copy, nonatomic) NSString * payloadDescription;
@property (nonatomic) int identifer;

+ (NSData *)newPayloadWithData:(NSData *)arg0 ofType:(NSString *)arg1 description:(NSString *)arg2 previewImage:(UIImage *)arg3 identifier:(int)arg4;
+ (NSURL *)newPayloadWithURL:(NSString *)arg0 description:(NSString *)arg1 previewImage:(UIImage *)arg2 identifier:(int)arg3;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (NSURL *)URL;
- (void)setURL:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)payloadDescription;
- (UIImage *)previewImage;
- (void)setPreviewImage:(UIImage *)arg0;
- (int)identifer;
- (void)setPayloadDescription:(NSString *)arg0;
- (void)setIdentifer:(int)arg0;
- (char)wasString;
- (void)setWasString:(char)arg0;

@end
