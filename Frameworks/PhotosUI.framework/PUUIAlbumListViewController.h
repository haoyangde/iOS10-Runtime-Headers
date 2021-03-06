/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUIAlbumListViewController : PUAlbumListViewController {
    unsigned long long  __imagePickerAssetTypes;
    NSArray * __imagePickerMediaTypes;
    bool  _collectionsFetchResultIsValid;
    UIBarButtonItem * _imagePickerCancelButton;
}

@property (setter=_setImagePickerAssetTypes:, nonatomic) unsigned long long _imagePickerAssetTypes;
@property (setter=_setImagePickerMediaTypes:, nonatomic, copy) NSArray *_imagePickerMediaTypes;

- (void).cxx_destruct;
- (void)_handleImagePickerCancel:(id)arg1;
- (unsigned long long)_imagePickerAssetTypes;
- (id)_imagePickerMediaTypes;
- (void)_invalidateCollectionsFetchResult;
- (void)_setImagePickerAssetTypes:(unsigned long long)arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)_updateCollectionsFetchResultIfNeeded;
- (id)assetsFilterPredicate;
- (long long)filteringAssetTypes;
- (id)init;
- (void)loadView;
- (id)newGridViewControllerForAllPhotos;
- (id)newGridViewControllerForAssetCollection:(id)arg1;
- (id)newGridViewControllerForFolder:(id)arg1;
- (bool)pu_wantsNavigationBarVisible;
- (bool)shouldAllowEmailInAlbumSubtitle;
- (bool)shouldHideEmptyCollections;
- (bool)shouldShowAllPhotosItem;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateNavigationBarAnimated:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
