/* Runtime dump - OADLinkedMediaFile
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADLinkedMediaFile : OADMovie
{
    NSURL * mUrl;
    char mIsExternal;
}

@property (retain) NSURL * url;
@property char isExternal;

- (void)dealloc;
- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (char)isExternal;
- (void)setIsExternal:(char)arg0;

@end
