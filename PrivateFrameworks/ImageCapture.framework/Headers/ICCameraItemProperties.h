/* Runtime dump - ICCameraItemProperties
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraItemProperties : NSObject
{
    ICCameraDevice * _device;
    ICCameraFolder * _parentFolder;
    NSString * _name;
    NSString * _UTI;
    NSDate * _creationDate;
    NSDate * _modificationDate;
    char _locked;
    NSMutableDictionary * _userData;
}

@property ICCameraDevice * device;
@property ICCameraFolder * parentFolder;
@property (retain) NSString * name;
@property (retain) NSString * UTI;
@property (retain) NSDate * creationDate;
@property (retain) NSDate * modificationDate;
@property char locked;
@property (retain) NSMutableDictionary * userData;

- (void)setDevice:(ICCameraDevice *)arg0;
- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setLocked:(char)arg0;
- (NSDate *)modificationDate;
- (NSMutableDictionary *)userData;
- (void)setUserData:(NSMutableDictionary *)arg0;
- (NSString *)UTI;
- (void)setUTI:(NSSet *)arg0;
- (NSDate *)creationDate;
- (void)setParentFolder:(ICCameraFolder *)arg0;
- (char)locked;
- (void)setModificationDate:(NSDate *)arg0;
- (ICCameraFolder *)parentFolder;
- (void)setCreationDate:(NSDate *)arg0;
- (ICCameraDevice *)device;
- (void)finalize;

@end
