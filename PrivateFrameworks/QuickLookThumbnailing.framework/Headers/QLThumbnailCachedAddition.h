/* Runtime dump - QLThumbnailCachedAddition
 * Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailCachedAddition : NSObject
{
    GSAddition * _addition;
    unsigned long long _fileID;
}

@property (retain) GSAddition * addition;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setAddition:(GSAddition *)arg0;
- (GSAddition *)addition;
- (QLThumbnailCachedAddition *)initWithAddition:(GSAddition *)arg0;
- (char)isStillValid;

@end
