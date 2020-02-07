#easyOPAC External Videos
Adds "Related videos" field group to material item which matches configured in backend material type.
The field group is rendered on page load, but data is requested only after click on this element. The data is requested from
LMS Service.

### Installation
- Enable `easyOPAC External Videos` module on `@/admin/modules` page.

### Configuration
1. Go to `@/admin/config/external-videos` page.
2. Fill `LMS Service URL` field.
3. Check the `Online types` boxes for material types where the `Related videos` fieldgroup will be displayed.
