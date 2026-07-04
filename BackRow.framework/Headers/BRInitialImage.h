/* Runtime dump - BRInitialImage
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRInitialImage : ATVImage
{
    NSData * _data;
}

+ (BRInitialImage *)initialImageWithData:(NSData *)arg0;

- (void)purgeRawData;
- (NSMutableData *)rawData;
- (void).cxx_destruct;

@end
